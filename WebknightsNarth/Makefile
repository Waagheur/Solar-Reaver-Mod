# This Makefile is for addons with models in a models folder
addon_name = WebknightsNarth

main:
# Make dirs and purge
	if exist "$(pbo_build_dir)/$(addon_name)" rmdir /S /Q "$(pbo_build_dir)/$(addon_name)"
	mkdir "$(pbo_build_dir)/$(addon_name)"
	
# Build addon without models (with binarise)
	XCOPY /I /E /Y "$(subst /,\,$(CURDIR))" "$(subst /,\,$(pbo_build_dir)/$(addon_name))"
	rmdir /S /Q "$(pbo_build_dir)/$(addon_name)/models"
	
	$(addon_builder) "$(pbo_build_dir)/$(addon_name)" "$(pbo_build_dir)" -clear -include=$(include_file) -exclude=$(exclude_file)
	rmdir /S /Q "$(pbo_build_dir)/$(addon_name)"
	mkdir "$(pbo_build_dir)/$(addon_name)"
	
# Extract partial addon and copy models
	$(pbov) unpackFolder -p="$(pbo_build_dir)/$(addon_name).pbo"
	del "$(pbo_build_dir)\$(addon_name).pbo"
	del "$(pbo_build_dir)\$(addon_name)\$$PREFIX$$"
	XCOPY /I /E /Y "$(subst /,\,$(CURDIR)/models)" "$(subst /,\,$(pbo_build_dir)/$(addon_name)/models)"
	
# Restore config.cpp, we need it for the addon_builder to pack the whole thing
	del "$(pbo_build_dir)\$(addon_name)\config.bin"
	copy /Y Config.cpp "$(pbo_build_dir)\$(addon_name)"
	
# Build full addon
	if exist "$(mod_build_dir)/$(addon_name).pbo" del "$(mod_build_dir)\$(addon_name).pbo"
	$(addon_builder) "$(pbo_build_dir)\$(addon_name)" "$(mod_build_dir)" -packonly -clear -include=$(include_file) -exclude=$(exclude_file)
# This one doesn't work properly here, I suppose there is some sort of binding needed that the addon_builder does
#	$(make_pbo) -dst "$(mod_build_dir)" "$(pbo_build_dir)\$(addon_name)"