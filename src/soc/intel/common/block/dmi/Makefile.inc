ifeq ($(CONFIG_SOC_INTEL_COMMON_BLOCK_DMI), y)

bootblock-y += dmi.c
romstage-y += dmi.c
ramstage-y += dmi.c

endif
