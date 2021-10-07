# ARM-Cortex-C-Implmentations- 

This is a basic setup for ARM Cortex series M microcontrollers. The target drive is set to the 
STM32F10x Mid-density on-chip flash algorithm by ARM Keil and is also compatible with ARMv8-M architecture.
The address Range is from 080000000H - 0801FFFFH which is the valid range of addresses that are able to be processed given our 
memory limitations 


RIght out the box it comes with several tailour-made libraries: 

tensorflow::gemmlowp - A small, self contained GEMM that enables us to train rudimentary Neural Networks  

ARM-Packs::PKCS11 - A Cryptographic Token Interface allowing us to access highly secure algorithms 

MDK-Packs::AWS_IoT - A SDK for connecting to AWS IoT from devices implementing embedded C 

