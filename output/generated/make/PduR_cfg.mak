# --------{ EB Automotive Makefile }--------


### Zero Cost Operation - DISABLED

PduR_src_FILES += \
  $(PduR_OUTPUT_PATH)\src\PduR_GenUprLyrTx.c \

PduR_src_FILES_enabled      += \
	$(PduR_CORE_PATH)\src\PduR_CanIfRxIndication.c \
	$(PduR_CORE_PATH)\src\PduR_CanIfTxConfirmation.c \
	$(PduR_CORE_PATH)\src\PduR_ComTransmit.c \
	$(PduR_CORE_PATH)\src\PduR_GenericIfRxIndication.c \
	$(PduR_CORE_PATH)\src\PduR_GenericIfTransmit.c \
	$(PduR_CORE_PATH)\src\PduR_GenericIfTxConfirmation.c \
	$(PduR_CORE_PATH)\src\PduR_Init.c \
	$(PduR_CORE_PATH)\src\PduR_GetConfigurationId.c


