//
//  Person.h
//  ProtocolDemo2
//
//  Created by Bodacious on 03/12/15.
//  Copyright © 2015 Bodacious. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property NSString* firstName;
@property NSString* lastName;
@property NSString* city;
@property NSString* number;

-(id)initWithFName:(NSString*)fname LName:(NSString*)lname City:(NSString*)city Number:(NSString*)number;


@end
