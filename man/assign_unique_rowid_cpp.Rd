% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{assign_unique_rowid_cpp}
\alias{assign_unique_rowid_cpp}
\title{Assigns a unique ID to each point with distinct X,Y coordinates}
\usage{
assign_unique_rowid_cpp(X, Y)
}
\arguments{
\item{X, Y}{A pair of numeric vectors with the coordinates for each point.}
}
\value{
A vector with the same length as \code{X} and \code{Y} containing
IDs that range from 0 to N where N is the number of unique points.
}
\description{
Assigns a unique ID to each point with distinct X,Y coordinates
}
