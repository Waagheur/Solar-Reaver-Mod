# This Makefile is for addons with no models to deal with
addon_name = SR_Arsenal

main:
# Build full addon
	if exist "$(mod_build_dir)\$(addon_name).pbo" del "$(mod_build_dir)\$(addon_name).pbo"
	$(addon_builder) "$(CURDIR)" "$(mod_build_dir)" -clear -include=$(include_file) -exclude=$(exclude_file)
	