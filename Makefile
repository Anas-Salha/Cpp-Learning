.PHONY: clean All

All:
	@echo "----------Building project:[ 001_DerivedClasses - Debug ]----------"
	@cd "Section015\001_DerivedClasses" && "$(MAKE)" -f  "001_DerivedClasses.mk"
clean:
	@echo "----------Cleaning project:[ 001_DerivedClasses - Debug ]----------"
	@cd "Section015\001_DerivedClasses" && "$(MAKE)" -f  "001_DerivedClasses.mk" clean
