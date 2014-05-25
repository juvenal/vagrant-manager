//
//  InstanceMenuItem.h
//  Vagrant Manager
//
//  Copyright (c) 2014 Lanayo. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "VagrantInstance.h"

@interface InstanceMenuItem : NSView

@property (weak) IBOutlet NSImageView *stateImageView;
@property (weak) IBOutlet NSTextField *nameTextField;

@property (strong, nonatomic) VagrantInstance *instance;

@end
