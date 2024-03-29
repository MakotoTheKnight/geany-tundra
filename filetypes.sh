# For complete documentation of this file, please see Geany's main documentation
[styling]
# foreground;background;bold;italic

default=0xf1f1f1;0x0F2C3A;false;false
number=0x7ECDFF;0x0F2C3A;false;false
string=0xC4E6FA;0x0F2C3A;false;false
character=0xC4E6FA;0x0F2C3A;false;false
commentline=0xD3DEE2;0x0F2C3A;false;false
operator=0x6F92A2;0x0F2C3A;true;false
word=0x99CBFF;0x0F2C3A;true;false

identifier=0xF1F1F1;0x0F2C3A;false;false
backticks=0xDBDBDB;0x0F2C3A;false;false
param=0xC4E6FA;0x0F2C3A;false;false
scalar=0x7ECDFF;0x0F2C3A;false;false

[keywords]
primary=break case continue do done elif else esac eval exit export fi for function goto if in integer return set shift then until while


[settings]
# default extension used when saving files
#extension=sh

# the following characters are these which a "word" can contains, see documentation
#wordchars=_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789

# if only single comment char is supported like # in this file, leave comment_close blank
comment_open=#
comment_close=

# set to false if a comment character/string should start a column 0 of a line, true uses any
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
run_cmd="./%f"
