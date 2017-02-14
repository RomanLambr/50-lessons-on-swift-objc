//
//  RTObject+CoreDataProperties.h
//  HW41
//
//  Created by Руслан on 28.01.17.
//  Copyright © 2017 Ruslan Timchenko. All rights reserved.
//

#import "RTObject+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface RTObject (CoreDataProperties)

+ (NSFetchRequest<RTObject *> *)fetchRequest;


@end

NS_ASSUME_NONNULL_END