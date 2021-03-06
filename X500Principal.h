// Copyright 2013 Inventive Designers
//
//  Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//
//  X500Principal.h
//  FireBreath
//
//  Created by Nick Van den Bleeken on 25/03/13.
//
//

#ifndef __FireBreath__X500Principal__
#define __FireBreath__X500Principal__

#include "JSAPIAuto.h"
#include "BrowserHost.h"

class X500Principal : public FB::JSAPIAuto
{
public:
    X500Principal(const FB::BrowserHostPtr& host, std::wstring name);
    virtual ~X500Principal() {};
    
    X500Principal(const X500Principal& other);
    X500Principal& operator=(const X500Principal& other);
    
    std::wstring get_name();
    
protected:
    FB::BrowserHostPtr m_host;
    std::wstring m_name;
    
private:
    void initializeProperties();
};

#endif /* defined(__FireBreath__X500Principal__) */
