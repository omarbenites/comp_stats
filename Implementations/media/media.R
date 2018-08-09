x <- 1:10
p <- 0
n <- length(x)

# Media algorithm ---------------------------------------------------------

for(i in 1:n){
  p <- p+x[i]
}
media <- p/n