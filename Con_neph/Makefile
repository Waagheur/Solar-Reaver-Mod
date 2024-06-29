addon_name = Con_neph

main:
# Build full addon (without bin, it hates us here, the plane don't want to spawn with it)
	if exist "$(mod_build_dir)\$(addon_name).pbo" del "$(mod_build_dir)\$(addon_name).pbo"
	$(addon_builder) "$(CURDIR)" "$(mod_build_dir)" -clear -packonly -include=$(include_file) -exclude=$(exclude_file)