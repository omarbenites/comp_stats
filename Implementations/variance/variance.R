
#Sample Variance ----------------------------------------------------------------

x <- c(1.4,1.34,7.8,1.20)

variance <- function(x){
  n <- length(x)
  sum <- d <-  0
  for(i in 1:n){
    d <-  (x[i]- mean(x,na.rm = TRUE))^2
    sum <- sum + d
  }
  sum <- sum/(n-1)
  return(sum)
}
m <- variance(x)

library(testthat)
a <- var(x)

#Testing
a==m

