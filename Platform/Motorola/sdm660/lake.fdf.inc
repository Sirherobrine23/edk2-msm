// per-device BSP DXEs
FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
  SECTION DXE_DEPEX = Platform/EFI_Binaries/Drivers/Devices/lake/ButtonsDxe/ButtonsDxe.depex
  SECTION PE32 = Platform/EFI_Binaries/Drivers/Devices/lake/ButtonsDxe/ButtonsDxe.efi
  SECTION UI = "ButtonsDxe"
}

// ACPI Tables
FILE FREEFORM = 7E374E25-8E01-4FEE-87F2-390C23C606CD {
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/DSDT/DSDT.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/CSRT.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/DBG2.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/FACS.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/FADT.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/GTDT.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/MADT.aml
  SECTION RAW = Silicon/Qualcomm/sdm660/AcpiTables/BuiltIn/MCFG.aml
  SECTION UI = "AcpiTables"
}

// Mainline device tree blob
FILE FREEFORM = 25462CDA-221F-47DF-AC1D-259CFAA4E326 {
  SECTION RAW = Platform/Motorola/sdm660/FdtBlob/lake/sdm660-motorola-lake.dtb
  SECTION RAW = Platform/Motorola/sdm660/FdtBlob/lake/evt1-overlay.dtbo
  SECTION RAW = Platform/Motorola/sdm660/FdtBlob/lake/evt2-overlay.dtbo
  SECTION RAW = Platform/Motorola/sdm660/FdtBlob/lake/na-evt2-overlay.dtbo
}