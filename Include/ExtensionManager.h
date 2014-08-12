//
//  ExtensionManager.h
//  Platform
//
//  Created by Wahid Tanner on 6/15/14.
//

#ifndef Platform_ExtensionManager_h
#define Platform_ExtensionManager_h

#include <string>
#include <unordered_map>

#include "ExtensionInterface.h"

namespace MuddledManaged
{
    namespace Platform
    {
        class ExtensionManager
        {
        public:
            ExtensionManager ();
            ~ExtensionManager ();

            virtual void load (const std::string & path) const;
            virtual void loadAll (const std::string & path) const;
            virtual const std::string sendMessage (const std::string & address, const std::string & message) const;

        private:
            std::unordered_map<std::string, ExtensionInterface> loadedExtensions;
        };

    } // namespace Platform

} // namespace MuddledManaged

#endif // Platform_ExtensionManager_h
