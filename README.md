# libanswer
This is a pointless library just to demonstrate some bitbake mechanisms.

It contains the following, artificial pitfalls:
- build time dependency on boost::lexical_cast -> DEPENDS
- runtime dependency on bc
- installs an example binary by default, which one usually does not want for libraries -> FILES and PACKAGES
