# Author : Lars Gullik Bjønnes <larsbj@lyx.org>

# This include file contains all the counters that are defined as standard
# in most LyX layouts.


Format 4

Counter
	Name                 section
End

Counter
	Name                 subsection
	Within               section
End

Counter
	Name                 subsubsection
	Within               subsection
End

Counter
	Name                 paragraph
	Within               subsubsection
End

Counter
	Name                 engoste
# TODO: does not affected
	Within               subsection
	Within               section
	Within               subsubsection
End

Counter
	Name                 ensubgoste
	Within               engoste
End

Counter
	Name                 subparagraph
	Within               paragraph
End

Counter
	Name                 enumi
End

Counter
	Name                 enumii
	Within               enumi
End

Counter
	Name                 enumiii
	Within               enumii
End

Counter
	Name                 enumiv
	Within               enumiii
End

Counter
	Name                 bibitem
End

Counter
	Name                 figure
End

Counter
	Name                 table
End

Counter
	Name                 algorithm
End

Counter
	Name                 equation
End

Counter
	Name                 listing
End
