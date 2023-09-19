Data compression or source coding or bit rate reduction is the process of encoding information using fewer bits than
the original representation.

Any compression algorithm is either LOSSY or LOSSLESS :

LOSSLESS : this compression reduces bits by removing bits by identifying and removing statistical redundancy. 
No information is lost in this process.

LOSSY : this compression works by removing unnecessary or less important information.
This approach could lead to loss of information.




LOSSLESS COMPRESSION
--------------------


This algorithm usually exploits statistical redundancy to represent data without losing any information,
which makes this process reversible. 
this algorithm is possible because most real world data exhibits statistical redundancy

* RUN LENGTH ENCODING *
This just basically means that if there is an images which contains the following (pixels):
red , red , red, red, red, .....100 times (say)

this could be written as : 100 red 

