% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils_dmt.R
\name{dmt_set_f}
\alias{dmt_set_f}
\title{Set DMT scalar field values as the Frobenius norm of the total derivative}
\usage{
dmt_set_f(dmt, field)
}
\arguments{
\item{dmt}{A list containing the mesh data structures:
\itemize{
\item \code{pts} is a \code{N} x \code{2+M} data table with columns \code{X} and \code{Y} containing the
coordinates of cells and additional metadata.
\item \code{tris} is a \code{F} x \code{4} data table containing the X,Y coordinates of each
triangle's centroid in the first two columns, and area and
largest height of each triangle in the last two columns.
\item \code{edges} is a \code{E} x \code{14} data table with columns \code{from_pt}, \code{to_pt}, \code{from_tri}, \code{to_tri},
\code{x0_pt}, \code{x1_pt}, \code{y0_pt}, \code{y1_pt}, \code{x0_tri}, \code{x1_tri}, \code{y0_tri}, \code{y1_tri},
\code{length_pt}, \code{length_tri}. If only one triangle uses an edge, then the \code{from_tri},
\code{x0_tri}, and \code{y0_tri} fields will contain NaN values.
\item \code{tri_to_pt} is a \code{F} x \code{N} sparse matrix with value 1 at (i,j) if
triangle i uses point j as a vertex.
\item \code{udv_cells} contains cell embeddings stored in \code{embeddings}
(a \code{N} x \code{D} matrix with \code{D}-dimensional embeddings for each cell)
and \code{loadings} (a \code{G} x \code{D} matrix with gene loadings for each latent variable).
}}

\item{field}{A gradient field with the compressed representations \code{pts_svd},
\code{tris_svd}, \code{edges_pts_svd}, and \code{edges_tris_svd}. Each of these
is a \code{N} x \code{6} matrix with the following columns for each location:
\itemize{
\item \verb{dx_grad,dy_grad}: x,y directions of unit vector in the
direction of greatest change (first singular vector).
\item \verb{dx_ortho,dy_ortho}: x,y directions of unit vector orthogonal
to the direction of greatest change (second singular vector).
\item \verb{len_grad,len_ortho}: Magnitude of directional derivative in the
gradient and orthogonal directions (singular values).
}}
}
\value{
\code{dmt} with the following additional attributes:
\code{dmt$pts$f}, \code{dmt$tris$f}, \code{dmt$edges$f_prim}, and \code{dmt$edges$f_dual}
}
\description{
Set DMT scalar field values as the Frobenius norm of the total derivative
}
