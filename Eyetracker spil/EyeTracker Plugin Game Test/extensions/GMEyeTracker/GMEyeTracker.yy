{
    "id": "baa18f88-5cc0-406c-b0a1-5307607fc678",
    "modelName": "GMExtension",
    "mvc": "1.2",
    "name": "GMEyeTracker",
    "IncludedResources": [
        
    ],
    "androidPermissions": [
        
    ],
    "androidProps": false,
    "androidactivityinject": "",
    "androidclassname": "",
    "androidinject": "",
    "androidmanifestinject": "",
    "androidsourcedir": "",
    "author": "",
    "classname": "",
    "copyToTargets": -1,
    "date": "2020-53-17 11:04:56",
    "description": "",
    "exportToGame": true,
    "extensionName": "",
    "files": [
        {
            "id": "f5a1e2da-9631-4ee3-8435-8a8589cb93af",
            "modelName": "GMExtensionFile",
            "mvc": "1.0",
            "ProxyFiles": [
                
            ],
            "constants": [
                
            ],
            "copyToTargets": 52777100279872,
            "filename": "GMEyeTracker.dll",
            "final": "",
            "functions": [
                {
                    "id": "03c96962-7e68-4cdc-891a-6e420aee6b58",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": 0,
                    "args": [
                        
                    ],
                    "externalName": "GetEyePosX",
                    "help": "Returns the X pos of the eye gaze",
                    "hidden": false,
                    "kind": 11,
                    "name": "GetEyePosX",
                    "returnType": 2
                },
                {
                    "id": "b3e433b7-2837-43a0-a06c-92c4c6ddfad9",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": 0,
                    "args": [
                        
                    ],
                    "externalName": "GetEyePosY",
                    "help": "Get the Y pos of the eye gaze",
                    "hidden": false,
                    "kind": 11,
                    "name": "GetEyePosY",
                    "returnType": 2
                },
                {
                    "id": "7fb23861-22d2-42fa-87ec-737688389cd8",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": -1,
                    "args": [
                        
                    ],
                    "externalName": "Init",
                    "help": "Returns 1 if success, Call this once to initilise the TobiiEyeX controller",
                    "hidden": false,
                    "kind": 11,
                    "name": "GMEyeTracker_Init",
                    "returnType": 2
                },
                {
                    "id": "a176798e-0880-45b6-8f9c-8a5bc02aebd7",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": -1,
                    "args": [
                        
                    ],
                    "externalName": "Stop",
                    "help": "Returns 1 if success, Stops the TobiiEyeX datastream to your game.",
                    "hidden": false,
                    "kind": 11,
                    "name": "GMEyeTracker_Stop",
                    "returnType": 2
                },
                {
                    "id": "6a6fdc1a-088a-40a2-9945-9c8afea4d555",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": -1,
                    "args": [
                        
                    ],
                    "externalName": "GetUserPresent",
                    "help": "Returns 1 if the User is present",
                    "hidden": false,
                    "kind": 11,
                    "name": "GMEyeTracker_GetUserPresent",
                    "returnType": 2
                },
                {
                    "id": "205713ce-9a5b-402d-9620-16d585888c67",
                    "modelName": "GMExtensionFunction",
                    "mvc": "1.0",
                    "argCount": 0,
                    "args": [
                        
                    ],
                    "externalName": "GetConnectionState",
                    "help": "Returns 1 if you are connected to the eye tracker",
                    "hidden": false,
                    "kind": 11,
                    "name": "GMEyeTracker_GetConnectionState",
                    "returnType": 2
                }
            ],
            "init": "",
            "kind": 1,
            "order": [
                
            ],
            "origname": "extensions\\GMEyeTracker.dll",
            "uncompress": false
        },
        {
            "id": "99603e63-d7d8-4748-b8fa-df5d716eacdf",
            "modelName": "GMExtensionFile",
            "mvc": "1.0",
            "ProxyFiles": [
                
            ],
            "constants": [
                
            ],
            "copyToTargets": 52777100279872,
            "filename": "Tobii.EyeX.Client.dll",
            "final": "",
            "functions": [
                
            ],
            "init": "",
            "kind": 1,
            "order": [
                
            ],
            "origname": "extensions\\Tobii.EyeX.Client.dll",
            "uncompress": false
        }
    ],
    "gradleinject": "",
    "helpfile": "",
    "installdir": "",
    "iosProps": false,
    "iosSystemFrameworkEntries": [
        
    ],
    "iosThirdPartyFrameworkEntries": [
        
    ],
    "iosdelegatename": "",
    "iosplistinject": "",
    "license": "Free to use, also for commercial games.",
    "maccompilerflags": "",
    "maclinkerflags": "",
    "macsourcedir": "",
    "options": null,
    "optionsFile": "options.json",
    "packageID": "com.JamieFord.GMEyeTracker",
    "productID": "63DB2F5AF16DC9A5862137DD23C3AED6",
    "sourcedir": "",
    "supportedTargets": -1,
    "tvosProps": false,
    "tvosSystemFrameworkEntries": [
        
    ],
    "tvosThirdPartyFrameworkEntries": [
        
    ],
    "tvosclassname": "",
    "tvosdelegatename": "",
    "tvosmaccompilerflags": "",
    "tvosmaclinkerflags": "",
    "tvosplistinject": "",
    "version": "1.0.1"
}