//========================================================================================
//  
//  $File: $
//
//  $Revision: $
//
//  Copyright 1987 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#import <Cocoa/Cocoa.h>


@interface CalcController : NSViewController 
{
	IBOutlet NSButton *addButton;
	IBOutlet NSTextField *value1;
	IBOutlet NSTextField *value2;
	IBOutlet NSTextField *output;
	
}

- (IBAction)add:(id)sender;

@end
