//
//  LegacyWiFi.h
//  macOS Catalina Patcher
//
//  Created by Collin Mistr on 6/28/19.
//  Copyright (c) 2019 dosdude1 Apps. All rights reserved.
//

#import "Patch.h"

@interface LegacyWiFi : Patch

-(id)init;
-(int)applyToVolume:(NSString *)volumePath;

@end
