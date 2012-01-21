// 
//  Defines.h
//  Defines-and-Macros
//  
//  Created by Shaun Bentzen on 2012-01-21.
//  Copyright 2012 Shaun Bentzen. All rights reserved.
// 


#pragma mark -
#pragma mark Operators

#define AND           &&
#define OR            ||
#define MOD           %


#pragma mark MATH
#define degreesToRadian(x) (M_PI * (x) / 180.0)

#pragma mark -
#pragma mark UI Defaults
#define kCLEAR_COLOR            [UIColor clearColor]
#define defaultColor            [UIColor blackColor]
#define defaultFont             [UIFont fontWithName:@"Helvetica" size:16]
#define kScreenCenterX          ([[UIScreen mainScreen] bounds].size.width /2)
#define kScreenCenterY          ([[UIScreen mainScreen] bounds].size.height /2)
#define kScreenWidth			UIScreen.mainScreen.bounds.size.width
#define kScreenHeight			UIScreen.mainScreen.bounds.size.height
#define kFlexibleWidth          UIInterfaceOrientationIsPortrait([thisDevice orientation])?kScreenWidth:kScreenHeight
#define kFlexibleHeight         UIInterfaceOrientationIsPortrait([thisDevice orientation])?kScreenHeight:kScreenWidth
#define kFullScreen             CGRectMake(0, 0, kFlexibleWidth, kFlexibleHeight)
#define kNumberOfPages          1 // This is where you define the number of pages the app has
#define kDeviceVersion			[[[UIDevice currentDevice] systemVersion] floatValue]
#define kViewableHeight         kScreenHeight - (20+49+44) //This assumes both a tab bar and navigation bar, change when not exactly what you want
#define kViewableScreenSize     CGSizeMake(kScreenWidth, kViewableHeight)

#pragma mark -
#pragma mark Status Checks
#define isiPad                                          ([thisDevice userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define isiPhone                                        ([thisDevice userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define UIDeviceOrientationIsLayingDown(orientation)    ((orientation) == UIDeviceOrientationFaceUp || (orientation) == UIDeviceOrientationFaceDown)
#define nameOfSelectedRow                               [[[tableView cellForRowAtIndexPath:[tableView indexPathForSelectedRow]] textLabel] text]
#define thisDevice                                      [UIDevice currentDevice]
#define thisApplicationsDelegate                        (iCambrianAppDelegate*)[[UIApplication sharedApplication] delegate];
#define cameraAvailable                                 [UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]
#define applicationDocumentsDir                         [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]

#pragma mark -
#pragma mark Other
#define userDefaultString(string)                    [[NSUserDefaults standardUserDefaults]stringForKey:string]
#define pageWidths(numOfPages)                       (numOfPages * UIScreen.mainScreen.bounds.size.width)
#define this									     self
