// -------------------------------------------------------------------------
//    @FileName      :   NFCBulletSkillConsumeProcessModule.cpp
//    @Author           :   LvSheng.Huang
//    @Date             :   2013-10-02
//    @Module           :   NFCBulletSkillConsumeProcessModule
// -------------------------------------------------------------------------

#include "NFCBulletSkillConsumeProcessModule.h"

bool NFCBulletSkillConsumeProcessModule::Init()
{

    return true;
}

bool NFCBulletSkillConsumeProcessModule::AfterInit()
{
    m_pKernelModule = pPluginManager->FindModule<NFIKernelModule>();
    m_pSkillConsumeManagerModule = pPluginManager->FindModule<NFISkillConsumeManagerModule>();
    m_pElementModule = pPluginManager->FindModule<NFIElementModule>();

        //m_pSkillConsumeManagerModule->ResgisterConsumeModule( EGameSkillType::EGST_JOBSKILL_BULLET, this );

    return true;
}

bool NFCBulletSkillConsumeProcessModule::Shut()
{
    return true;
}

bool NFCBulletSkillConsumeProcessModule::Execute()
{
    return true;
}


int NFCBulletSkillConsumeProcessModule::ConsumeLegal( const NFGUID& self, const std::string& skillID,  const NFIDataList& other )
{
        return 1;
}

int NFCBulletSkillConsumeProcessModule::ConsumeSelf( const NFGUID& self, const std::string& skillID )
{
    
    
    return 0;
}

int NFCBulletSkillConsumeProcessModule::ConsumeProcess( const NFGUID& self, const std::string& strItemName, const NFIDataList& other, NFIDataList& damageListValue , NFIDataList& damageResultList )
{
    return 0;
}

int NFCBulletSkillConsumeProcessModule::ConsumeProcessEx( const NFGUID& self, const std::string& strSkillName, const NFIDataList& other, NFIDataList& damageListValue, NFIDataList& damageResultList )
{
    return 0;
}
