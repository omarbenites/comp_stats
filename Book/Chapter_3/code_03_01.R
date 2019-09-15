
#BOOK Introduction to the New statistics --------------------------------------

### Chapter 3

##Exercise 3.15##
#Generating a random sample
rs <- sample(x = 1:100,size = 50) 
#a) Calculate the largest value in the sample
maxv <- max(rs,na.rm = TRUE)
#Plot histogram and max value
hist(rs) 
#Plot dot plot and max value
library(ggplot2)
rsdf <- data.frame(rs,stringsAsFactors = FALSE)
ggplot(rsdf, aes(x = rs)) + geom_dotplot(binwidth = 1.5, 
                                         fill ="#7b68ee")+
                            geom_vline(xintercept = maxv) +
                            geom_vline(xintercept = mean(rs),color="red")

#b) Calculate the z-score for the larges value
zscore <- function(xval, x){
  z <- (xval - mean(x))/var(x)
  return(z)
}
zmax <-zscore(xval=maxv, x= rs) 
print(zmax)

#c) Tranform to z-scores all the sample values
zv <- vector(mode = "numeric", length = as.integer(length(rs)))
for(i in seq.int(rs)){
    zv[i] <- zscore(xval =rs[i],x=rs)
    zv[i] <- round(zv[i],digits = 2)
}
print(zv)
#d) Make a graphic of z-score's values
zvdf <- data.frame(zv,stringsAsFactors = FALSE)
#Density plot
ggplot(zvdf, aes(zv)) + geom_density()


## Exercise 3.19 ##
dd <- sample(1:100, 12)
#mean
mean(dd)
#median
median(dd)
#zcore
zscore(xval = max(dd), dd)
#IQR
IQR(dd)
#Change max value for a higher value
dd[which(dd==max(dd))] <- 200
#mean
mean(dd) #Rpta: aumenta la media 

##Excersise
## Exercise 3.19 ##
#Generate data that measure happines. 
#This data describe: 1: extremely unhappy, and 2: extrememly happy
dd <- sample(1:20, 30,replace = TRUE)






