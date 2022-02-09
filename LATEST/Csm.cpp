/*****************************************************/
/* File   : Csm.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Csm.h"

#include "Csm_EcuM.h"
#include "Csm_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_Csm_EcuM_Init Csm_EcuM_Init;
interface_Csm_SchM_Main Csm_SchM_Main;
class_Csm Csm;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_Csm = &Csm_EcuM_Init;
interface_SchM_Main_Client *SchM_Main_Client_ptr_Csm = &Csm_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, CSM_CODE) interface_Csm_EcuM_Init::InitFunction(void){
}

FUNC(void, CSM_CODE) interface_Csm_SchM_Main::MainFunction(void){
}

FUNC(void, CSM_CODE) class_Csm::GetVersionInfo(void){
}

FUNC(void, CSM_CODE) class_Csm::Hash(void){
}

FUNC(void, CSM_CODE) class_Csm::MacGenerate(void){
}

FUNC(void, CSM_CODE) class_Csm::MacVerify(void){
}

FUNC(void, CSM_CODE) class_Csm::Encrypt(void){
}

FUNC(void, CSM_CODE) class_Csm::Decrypt(void){
}

FUNC(void, CSM_CODE) class_Csm::AEADEncrypt(void){
}

FUNC(void, CSM_CODE) class_Csm::AEADDecrypt(void){
}

FUNC(void, CSM_CODE) class_Csm::SignatureGenerate(void){
}

FUNC(void, CSM_CODE) class_Csm::SignatureVerify(void){
}

FUNC(void, CSM_CODE) class_Csm::RandomGenerate(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyElementSet(void){
}

FUNC(void, CSM_CODE) class_Csm::KeySetValid(void){
}

FUNC(void, CSM_CODE) class_Csm::KeySetInvalid(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyGetStatus(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyElementGet(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyElementCopy(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyCopy(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyElementCopyPartial(void){
}

FUNC(void, CSM_CODE) class_Csm::RandomSeed(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyGenerate(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyDerive(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyExchangeCalcPubValue(void){
}

FUNC(void, CSM_CODE) class_Csm::KeyExchangeCalcSecret(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeySetValid(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeySetInvalid(void){
}

FUNC(void, CSM_CODE) class_Csm::JobRandomSeed(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeyGenerate(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeyDerive(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeyExchangeCalcPubValue(void){
}

FUNC(void, CSM_CODE) class_Csm::JobKeyExchangeCalcSecret(void){
}

FUNC(void, CSM_CODE) class_Csm::SaveContextJob(void){
}

FUNC(void, CSM_CODE) class_Csm::RestoreContextJob(void){
}

FUNC(void, CSM_CODE) class_Csm::CancelJob(void){
}

FUNC(void, CSM_CODE) class_Csm::CbNotification(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

