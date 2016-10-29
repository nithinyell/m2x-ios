//
//  M2XJob.h
//  M2X_iOS
//
//  Created by BABA on 10/28/16.
//  Copyright © 2016 AT&T. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "M2XResource.h"

@interface M2XJob : M2XResource

// List of Jobs
//
//https://m2x.att.com/developer/documentation/v2/jobs#List-Jobs
-(void)listOfJobs:(M2XArrayCallback)completionHandler;

// View Jobs
//
// https://m2x.att.com/developer/documentation/v2/jobs#View-Job-Details
-(void)viewJobs:(NSString*)jobID CompletionHandler:(M2XArrayCallback)completionHandler;

@end
