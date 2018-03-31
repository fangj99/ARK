/*
* This source file is part of ArkGameFrame
* For the latest info, see https://github.com/ArkGame
*
* Copyright (c) 2013-2018 ArkGame authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
*/

#include "AFLoginLogicPlugin.h"
#include "AFCLoginLogicModule.h"

bool AFCLoginLogicModule::Init()
{
    return true;
}

bool AFCLoginLogicModule::Shut()
{
    return true;
}

int AFCLoginLogicModule::OnLoginProcess(const AFGUID& object, const std::string& strAccount, const std::string& strPwd)
{
    return 0;
}

void AFCLoginLogicModule::Update()
{

}

bool AFCLoginLogicModule::PostInit()
{
    m_pLoginNet_ServerModule = pPluginManager->FindModule<AFILoginNetServerModule>();

    return true;
}