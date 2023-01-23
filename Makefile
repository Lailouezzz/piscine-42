PROJECTS := $(wildcard */)

clean-all: $(PROJECTS)

define make-project-clean-rule
$1:
	-(cd $1 && make clean)
endef
$(foreach project,$(PROJECTS), \
	$(eval $(call make-project-clean-rule,$(project))))

.PHONY: clean-all $(PROJECTS)
