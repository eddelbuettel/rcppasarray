# Interoperability between `Rcpp` and `std::array`

[`Rcpp`](https://www.rcpp.org) is a mature and very widely used package providing seamless interoperability between C++ and [the R language](https://www.r-project.org), which has a native C API. This repository and package functions as a minimal test harness for conversion between R data structures and the templated [`std::array` class](https://en.cppreference.com/w/cpp/container/array) introduced in C++11.

At the time this repo was created, there was no direct support for `array` in `Rcpp` itself, but a supported extension mechanism was available for the purpose. A problem getting the extension to work (outlined in [this Stack Overflow question](https://stackoverflow.com/questions/74887786/specialising-rcppas-for-stdarray)) turned out to boil down to using too narrow a type for a template parameter, but with the help of `Rcpp` maintainer [Dirk Eddelbuettel](https://github.com/eddelbuettel), a suitable solution was [arrived at](https://github.com/jonclayden/RcppArray/blob/main/src/array.h). That solution is reusable code under [GPL-2](https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html).