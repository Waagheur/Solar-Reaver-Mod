# This Makefile is for the SR_XI blob, with subaddon building (with binarisation) then packaging
addon_name = SR_XI

# Get sub folders
SUBDIRS := $(wildcard */.)

.PHONY: all 
all: $(SUBDIRS)
# Copy config.cpp
	copy /Y config.cpp "$(pbo_build_dir)\$(addon_name)"
	
# Build full addon (without binarise)
	if exist "$(mod_build_dir)/$(addon_name).pbo" del "$(mod_build_dir)\$(addon_name).pbo"
	$(make_pbo) -dst "$(mod_build_dir)" "$(pbo_build_dir)\$(addon_name)"

.PHONY: $(SUBDIRS)
# Launch make in SUBDIR, generated for every element of SUBDIRS
$(SUBDIRS):
		$(MAKE) -C $@