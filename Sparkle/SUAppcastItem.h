//
//  SUAppcastItem.h
//  Sparkle
//
//  Created by Andy Matuschak on 3/12/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#ifndef SUAPPCASTITEM_H
#define SUAPPCASTITEM_H

#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif
#import "SUExport.h"
@class SUSignatures;

SU_EXPORT @interface SUAppcastItem : NSObject<NSSecureCoding>
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSString *dateString;
@property (copy, readonly) NSDate *date;
@property (copy, readonly) NSString *itemDescription;
@property (strong, readonly) NSURL *releaseNotesURL;
@property (strong, readonly) SUSignatures *signatures;
@property (copy, readonly) NSString *minimumSystemVersion;
@property (copy, readonly) NSString *maximumSystemVersion;
@property (strong, readonly) NSURL *fileURL;
@property (nonatomic, readonly) uint64_t contentLength;
@property (copy, readonly) NSString *versionString;
@property (copy, readonly) NSString *osString;
@property (copy, readonly) NSString *displayVersionString;
@property (copy, readonly) NSDictionary *deltaUpdates;
@property (strong, readonly) NSURL *infoURL;
@property (copy, readonly) NSNumber* phasedRolloutInterval;
@property (nonatomic, copy, readonly) NSString *installationType;
@property (copy, readonly) NSString *minimumAutoupdateVersion;

@property (getter=isDeltaUpdate, readonly) BOOL deltaUpdate;
@property (getter=isCriticalUpdate, readonly) BOOL criticalUpdate;
@property (getter=isMacOsUpdate, readonly) BOOL macOsUpdate;
@property (getter=isInformationOnlyUpdate, readonly) BOOL informationOnlyUpdate;

// Returns the dictionary provided in initWithDictionary; this might be useful later for extensions.
@property (readonly, copy) NSDictionary *propertiesDictionary;

@end

#endif
