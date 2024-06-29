# This Makefile is for addons with models in a models folder
addon_name = SR_Accessories

main:
# Make dirs and purge
	if exist "$(pbo_build_dir)/$(addon_name)" rmdir /S /Q "$(pbo_build_dir)/$(addon_name)"
	mkdir "$(pbo_build_dir)/$(addon_name)"
	
# Build addon without models (with binarise)
	XCOPY /I /E /Y "$(CURDIR)" "$(pbo_build_dir)/$(addon_name)"
	rmdir /S /Q "$(pbo_build_dir)/$(addon_name)/models"
	
	$(addon_builder) "$(pbo_build_dir)/$(addon_name)" "$(pbo_build_dir)" -clear -include=$(include_file) -exclude=$(exclude_file)
	rmdir /S /Q "$(pbo_build_dir)/$(addon_name)"
	mkdir "$(pbo_build_dir)/$(addon_name)"
	
# Extract partial addon and copy models
	$(pbov) unpackFolder -p="$(pbo_build_dir)/$(addon_name).pbo"
	del "$(pbo_build_dir)\$(addon_name).pbo"
	XCOPY /I /E /Y "$(CURDIR)/models" "$(pbo_build_dir)/$(addon_name)/models"
	
# Build full addon
	if exist "$(mod_build_dir)/$(addon_name).pbo" del "$(mod_build_dir)\$(addon_name).pbo"
	$(make_pbo) -dst "$(mod_build_dir)" "$(pbo_build_dir)\$(addon_name)"