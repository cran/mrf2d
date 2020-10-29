## ---- include = FALSE---------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>",
  fig.width = 7, 
  fig.height = 4,
  fig.align = "center"
)

## ----setup--------------------------------------------------------------------
library(mrf2d)

## ----define_array-------------------------------------------------------------
set.seed(1)
dims <- c(64, 64, 3)
Z3 <- array(sample(0:1, prod(dims), replace = TRUE), dim = dims)
str(Z3)

## -----------------------------------------------------------------------------
gap <- 1

Zflat <- Z3[,,1]
for(i in 2:dim(Z3)[3]){
  Zflat <- rbind(Zflat, NA)
  Zflat <- rbind(Zflat, Z3[,,i])
}

str(Zflat)

## -----------------------------------------------------------------------------
dplot(Zflat)

## ---- warning = FALSE, message = FALSE----------------------------------------
library(ggplot2)
dplot(Zflat) + scale_fill_manual(values = c("0" = "black", "1" = "gray95"), na.value = "blue")

## -----------------------------------------------------------------------------
R3 <- mrfi(1) + c(0 + 1*dims[1]+gap, 0)
R3

## -----------------------------------------------------------------------------
theta <- expand_array(-0.8, "onepar", mrfi = R3, 1)
theta

## -----------------------------------------------------------------------------
set.seed(2)
Zflat_ising <- rmrf2d(Zflat, R3, theta)

dplot(Zflat_ising)

## -----------------------------------------------------------------------------
Z3_ising <- array(0, dim = dims)
for(i in 1:3){
  Z3_ising[,,i] <- Zflat_ising[((i-1)*(64+gap) + 1):((i-1)*(64+gap) + 64),1:64]
}

## ---- fig.width=3-------------------------------------------------------------
dplot(Z3_ising[,,2])

## -----------------------------------------------------------------------------
pl3d <- fit_pl(Zflat_ising, R3, family = "onepar")
pl3d$theta

## -----------------------------------------------------------------------------
set.seed(3)
Yflat <- Zflat_ising + rnorm(prod(dim(Zflat)), sd = 0.4)
cplot(Yflat)

## -----------------------------------------------------------------------------
set.seed(4)
denoising <- fit_ghm(Yflat, R3, theta, verbose = FALSE)

## -----------------------------------------------------------------------------
dplot(denoising$Z_pred)

