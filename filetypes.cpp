# For complete documentation of this file, please see Geany's main documentation
[styling]
# This, the Java file, and the C file have very, very similar stylings.  I'm not sure if we could finagle it,
# but it would be nice to incorporate something similar to filetypes.xml.

default=0xf1f1f1;0x0F2C3A;false;false
number=0x7ECDFF;0x0F2C3A;false;false
string=0xC4E6FA;0x0F2C3A;false;false
stringeol=0xF1F1F1;0x0F2C3A;false;false
character=0xC4E6FA;0x0F2C3A;false;false
operator=0x6F92A2;0x0F2C3A;true;false
identifier=0xF1F1F1;0x0F2C3A;false;false

#Comment specific stylings

commentlinedoc=0x85DFFF;0x0F2C3A;false;false
commentdockeyword=0x85DFFF;0x0F2C3A;false;true
commentdockeyworderror=0x85DFFF;0x0F2C3A;false;false
comment=0xD3DEE2;0x0F2C3A;false;false
commentline=0x85DFFF;0x0F2C3A;false;false
commentdoc=0x85DFFF;0x0F2C3A;false;false

# Keyword stylings

word=0x99CBFF;0x0F2C3A;false;false

# Primitive stylings (includes String)

word2=0xC7C7C7;0x0F2C3A;false;false

# Class stylings

globalclass=0x56BFF2;0x0F2C3A;true;false

# Miscellaneous stylings

uuid=0x90B0C0;0x0F2C3A;false;false
preprocessor=0xD3DEE2;0x0F2C3A;false;false
verbatim=0xCFD5D7;0x0F2C3A;false;false
regex=0x5591B9;0x0F2C3A;false;false
styling_within_preprocessor=1;0;false;false

[keywords]
# all items must be in one line
primary=and and_eq asm auto bitand bitor bool break case catch char class compl const const_cast continue default delete do double dynamic_cast else enum explicit export extern false float for friend goto if inline int long mutable namespace new not not_eq operator or or_eq private protected public register reinterpret_cast return short signed sizeof static static_cast struct switch template this throw true try typedef typeid typename union unsigned using virtual void volatile wchar_t while xor xor_eq
secondary=
# these are some doxygen keywords (incomplete)
docComment=attention author brief bug class code date def enum example exception file fn namespace note param remarks return see since struct throw todo typedef var version warning union

[settings]
# default extension used when saving files
#extension=cpp

# the following characters are these which a "word" can contains, see documentation
#wordchars=_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789

# if only single comment char is supported like # in this file, leave comment_close blank
comment_open=//
comment_close=
# this is an alternative way, so multiline comments are used
#comment_open=/*
#comment_close=*/

# set to false if a comment character/string should start at column 0 of a line, true uses any
# indentation of the line, e.g. setting to true causes the following on pressing CTRL+d
	#command_example();
# setting to false would generate this
#	command_example();
# This setting works only for single line comments
comment_use_indent=true

# context action command (please see Geany's main documentation for details)
context_action_cmd=

[build_settings]
# %f will be replaced by the complete filename
# %e will be replaced by the filename without extension
# (use only one of it at one time)
compiler=g++ -Wall -c "%f"
linker=g++ -Wall -o "%e" "%f"
run_cmd="./%e"
