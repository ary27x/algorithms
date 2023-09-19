Data compression or source coding or bit rate reduction is the process of encoding information using fewer bits than
the original representation.

Any compression algorithm is either LOSSY or LOSSLESS :

<ins>LOSSLESS</ins> : this compression reduces bits by removing bits by identifying and removing statistical redundancy. 
No information is lost in this process.

<ins>LOSSY</ins> : this compression works by removing unnecessary or less important information.
This approach could lead to loss of information.




# LOSSLESS COMPRESSION



These algorithms usually exploits statistical redundancy to represent data without losing any information,
which makes this process reversible. 
These algorithms are possible because most real world data exhibits statistical redundancy

https://en.wikipedia.org/wiki/Redundancy_(information_theory)

RUN LENGTH ENCODING 
-------------------

This just basically means that if there is an images which contains the following (pixels):
red , red , red, red, red, .....100 times (say)

this could be written as : 100 red 

