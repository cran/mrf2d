## ----setup, include = FALSE---------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>",
  warning = FALSE,
  message = FALSE,
  fig.align = "center"
)
library(ggplot2)
library(glue)

## ----load_mrf2d---------------------------------------------------------------
library(mrf2d)

## ----ex_mrfi, echo = FALSE, out.width="30%"-----------------------------------
plot(mrfi(1), no_axis = TRUE) +  geom_text(aes(label = glue("({rx},{ry})")), size = 6) + xlim(-2,2) + ylim(-2,2)

## ----plots_examples, fig.width = 5, fig.height = 3, warning=FALSE-------------
# Z_potts is a matrix with an example of random field available in the package.
class(Z_potts)
unique(as.vector(Z_potts))

dplot(Z_potts, legend = TRUE)
set.seed(1)
cplot(Z_potts + rnorm(length(Z_potts), sd = 0.6))

# Customizing plots with ggplot2's grammar
library(ggplot2)
dplot(Z_potts, legend = TRUE) + ggtitle("Title added with ggplot2")
dplot(Z_potts, legend = TRUE) + scale_fill_brewer(type = "qual") + 
  ggtitle("Title added with ggplot2")

## ----theta_example------------------------------------------------------------
mrf2d:::vec_to_array(-0.99, "onepar", 1, 2)

## -----------------------------------------------------------------------------
my_mrfi <- mrfi(max_norm = 3, norm_type = "1")
my_mrfi

plot(my_mrfi)

