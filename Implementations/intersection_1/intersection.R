
# Intersection sets algorithm v1.0 ----------------------------------------------------
#' @param A set A
#' @param B set B
#' @description Basic version of the intersection algorithm. For-loops based version.
#' Unvectorized version.
intersection <- function(A, B){
  i <- 1L
  n <- length(A)
  j <- 1L
  m <- length(B)
  c0 <- 0L
  p <- vector(mode = "integer", length = 0L)
  for(i in 1:n){
    for ( j in 1:m){
      if(A[i] == B[j]){
        c0 <- c0 + 1 
        p <- append(p,i)
       }  
    }
  }
  if(length(p)!=0){out <- A[p]}
  else if(c0 == 0 && length(p)==0){ out <- NULL}
  return(out)
}

A1 <- c("a","b","c","d","e","a","e")  
A2 <- c("d", "e", "f")  
intersection(A1,A2)  

#'Remove repeated elements
#'@param v vector
#' 
# rem_rep <- function(v){
#   i <- 1L
#   n <- nrow(i)
#   j <- 1L
#   for(i in 1:n){
#     
#   }
#   
#   
# }



# Intersection sets algorithm v2.0 ----------------------------------------------------
#' @param A set A
#' @param B set B
#' @description vectorized version. Using for loops.


