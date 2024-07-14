# Most of these tools require an active steam session with Arma 3 Tools to run correctly
# They are missing correct exe paths otherwise

addon_builder := "E:\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe"
# Soft build, for SR_XI for example
# "E:\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe" absolute_source_path absolute_destination_path -packonly -clear -temp=C:\Users\Nathan\AppData\Local\Temp -include=include.txt
# Hard build, for most addons
# "E:\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe" absolute_source_path absolute_destination_path -clear -temp=C:\Users\Nathan\AppData\Local\Temp -include=include.txt
# $(addon_builder) "$(CURDIR)" $(mod_build_dir) -clear -temp="$(CURDIR)/temp" -include=$(include_file) -exclude=$(exclude_file)

pbov := "E:\Progs\PBOV\PboViewer.exe"
# PboViewer.exe unpackFolder -p=SR_Medical.pbo

cfg_convert := "E:\Steam\steamapps\common\Arma 3 Tools\CfgConvert\CfgConvert.exe"
# $(cfg_convert) -bin source destination

make_pbo := "E:\Steam\steamapps\common\Arma 3 Tools\FileBank\FileBank.exe"
# Allows us to dodge the default order of the addon builder and avoid some build errors
# Like prebinarised config
# "E:\Steam\steamapps\common\Arma 3 Tools\FileBank\FileBank.exe" -dst . Con_neph
# Almost always bug out models and textures



# Actual end product folder, to be used with publisher
mod_build_dir := $(CURDIR)/../ModBuildDir
# Intermediate build folder, to not clutter the source folders
pbo_build_dir := $(CURDIR)/../PboBuildDir

# Things that should be copied directly when building addons
include_file := "$(CURDIR)/include.txt"
# Things that should be ignored when building addons
exclude_file := "$(CURDIR)/exclude.lst"



export



# Get sub folders
SUBDIRS := $(wildcard */.)

.PHONY: all 
all: $(SUBDIRS)
	copy /Y logo.paa "$(mod_build_dir)"
	copy /Y logo_small.paa "$(mod_build_dir)"
	copy /Y Mod.cpp "$(mod_build_dir)"

.PHONY: $(SUBDIRS)
# Launch make in SUBDIR, generated for every element of SUBDIRS
$(SUBDIRS):
		$(MAKE) -C $@
	
.PHONY: SR_FirstBorn

SR_FirstBorn:
	$(MAKE) -C SR_FirstBorn
	
.PHONY: SR_XI

SR_XI:
	$(MAKE) -C SR_XI
	$(MAKE) -C XI_Props