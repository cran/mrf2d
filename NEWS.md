# mrf2d 0.5
  * `rpositions()` can now be used as an alternative to create `mrfi` objects based on explicitly described relative positions with a simpler syntax than `mrfi()`.
  * Added a vignette on analyzing 3d data via 2d projections in `mrf2d`.
  * Fixed bug that caused the R session to crash when calling `smr_stat()` with incomplete lattices.

# mrf2d 0.4.1
  * Added `rmrf2d_mc` to simplify the use of Monte-Carlo methods from randomly generated fields.
  * Minor documentation updates.

# mrf2d 0.4
  * Added `mrfout` and `hmrfout` classes for model fitting functions output. A `summary()` and `plot()` methods are also available.
  * Simplified structure of documentation files.

# mrf2d 0.3

  * Co-ocurrence histogram computing is now exported in the `cohist()` function.
  * Computing of conditional probabilities for individual positions are now exported in the `cp_mrf2d()` function.
  * All the conversions from/to arrays to/from vectors are now available. See the help file for `smr_stat`.
  * Additional example data included in `field1` and `hfield1`.
  * Documentation improved, including paper available in: https://arxiv.org/abs/2006.00383
