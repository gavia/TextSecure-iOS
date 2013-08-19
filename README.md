# TextSecure for iOS

Currently in early development stage.

## Building

1) Clone the repo to a working directory

2) [CocoaPods](http://cocoapods.org) is used to manage dependencies. Run the following command to download the dependencies:

```
pod install
```

3) **Temporary** - Building OpenSSL manually. This step should be removed soon. The goal is to make a pod specification that builds OpenSSL during the `pod install` phase.

- Download the [latest sources](www.openssl.org/source/)
- Copy them in the `Libraries/src/` folder. 
- Run the bash script called `build-libssl.sh` and you should be ready to go.

4) Open the `TextSecureiOS.xcworkspace` in Xcode. Build and Run!

## Documentation

Looking for documentation? Check out the wiki!

https://github.com/WhisperSystems/TextSecure/wiki

## Cryptography Notice

This distribution includes cryptographic software. The country in which you currently reside may have restrictions on the import, possession, use, and/or re-export to another country, of encryption software. 
BEFORE using any encryption software, please check your country's laws, regulations and policies concerning the import, possession, or use, and re-export of encryption software, to see if this is permitted. 
See <http://www.wassenaar.org/> for more information.

The U.S. Government Department of Commerce, Bureau of Industry and Security (BIS), has classified this software as Export Commodity Control Number (ECCN) 5D002.C.1, which includes information security software using or performing cryptographic functions with asymmetric algorithms. 
The form and manner of this distribution makes it eligible for export under the License Exception ENC Technology Software Unrestricted (TSU) exception (see the BIS Export Administration Regulations, Section 740.13) for both object code and source code.

## License

Copyright 2013 Whisper Systems

Licensed under the GPLv3: http://www.gnu.org/licenses/gpl-3.0.html