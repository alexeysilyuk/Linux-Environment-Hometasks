					Programming in Linux Environment 2017-B
					Assignment  3: Task 1
					=======================================
					Name			#ID
					#######################################
					Jonathan Michael Leon	
					Liran Rotenberg 	
					Alexey Silyuk		
					Isabelle Meif		

					----------------------------------------
- Option -d takes dictonary file  from script's relative path and not absolute, if using ENVIRONMENT variable, use absolute path


Files included:
---------------



1. dict-lookup (bash script)
	- Recieves a paramater dictionary and a word and looks up for that word's translation
		-in case of filename that contains spaces or special symbols, use ' ' , i.ex : 'my file!' as dictionary parameter
	- Environment variable DICTIONARY can be used instead
	- Option -d takes dictonary file  from script's relative path and not absolute, if using ENVIRONMENT variable, use absolute path
	- Use -h Flag for synopsis
	- Use -q Flag for SILENT


2. dict-update (bash script)
	- Recieves a paramater dictionary, a word and a translation
	- Changes word's translation (Adds it if translation does not exist)
	- Word:Translation pairs should be in seperate lines as instructed
	- Environment variable DICTIONARY with absolute file path can be used instead of -d parameter that must be relative to script folder
	- Use -h Flag for synopsis
	- Use -q Flag for SILENT

EXAMPLE FILES
-------------

3. dict1 (text file)
	- Can be used as a paramater dictionary for 'dict-lookup'\'dict-update' scripts as an example



END

