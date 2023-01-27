#!/usr/bin/make -f
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
#
# Author : Alan "Lailouezzz" Le Bouder <alan.le-bouder@univ-rouen.fr>
#
# This Makefile was design for compile many folder who contain source files
# 
# Description of source tree for folders :
# └── <folder>
#     ├── <header>.h
#     └── <compilunit>.c
#
# After compilation :
# - $(OBJDIR)/<folder> contain all object files of <folder>
# - $(OUTDIR)/<folder> is the executable of <folder>
#
# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
include Makefile.vars Makefile.msg

# ---
# General targets
# ---

# Build everything

all: all-folders

# Mostly clean (clean everything but the end result)

mostlyclean:
	$(call rmsg,Removing the object folder ($(OBJDIR)))
	$(call qcmd,$(RM) -rf $(OBJDIR))

mclean: mostlyclean

# Clean everything

clean: mostlyclean
	$(call rmsg,Removing the output binary folder ($(OUTDIR)))
	$(call qcmd,$(RM) -rf $(OUTDIR))

fclean: clean

# To original state

mrproper: clean
	$(call rmsg,Removing the configuration file (Makefile.cfg))
	$(call qcmd,$(RM) -rf Makefile.cfg)


# Remake everything

re: clean all

.PHONY: all mostlyclean mclean clean fclean mrproper re

# ---
# Check configuration
# ---

Makefile.cfg:
	$(error Makefile.cfg missing did you "./configure")

# ---
# Folders targets
# ---

# Make the folders

all-folders : $(patsubst %,$(OUTDIR)/%,$(FOLDERS))
	$(call omsg,Binary files are stored in $(OUTDIR))
# Make a folder

define make-folder-rule
$(OUTDIR)/$1: $(F_OBJ_$1)
	$(call qcmd,$(MKDIR) -p $$(@D))
	$(call bcmd,ld,$(F_OBJ_$1),$(LD) $(F_LDFLAGS_$1) -o $$@ $(F_OBJ_$1))
endef
$(foreach folder,$(FOLDERS), \
$(eval $(call make-folder-rule,$(folder))))

# Make objects of a folder

define make-folder-objects-rule
$(F_OBJDIR)/$1/%.o: $(F_SRCDIR)/$1/%
	$(call qcmd,$(MKDIR) -p $$(@D))
	$(call bcmd,cc,$$<,$(CC) $(F_CFLAGS_$1) -o $$@ $$<)
endef
$(foreach folder,$(FOLDERS), \
$(eval $(call make-folder-objects-rule,$(folder))))

.PHONY: all-folders

# Include generated dep by cc

-include $(F_DEP)
