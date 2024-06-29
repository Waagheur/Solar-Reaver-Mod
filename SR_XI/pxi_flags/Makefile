# This Makefile is for SR_XI sub-addons, it binarises then unpack the sub addon
addon_name = pxi_flags

main:
# Build full addon
	if exist "$(pbo_build_dir)\SR_XI\$(addon_name).pbo" del "$(pbo_build_dir)\SR_XI\$(addon_name).pbo"
	$(addon_builder) "$(CURDIR)" "$(pbo_build_dir)/SR_XI/" -clear -include=$(include_file) -exclude=$(exclude_file)

# Unpack
	if exist "$(pbo_build_dir)\SR_XI\$(addon_name)" rmdir /S /Q  "$(pbo_build_dir)\SR_XI\$(addon_name)"
	$(pbov) unpackFolder -p="$(pbo_build_dir)/SR_XI/$(addon_name).pbo"
	del "$(pbo_build_dir)\SR_XI\$(addon_name).pbo"