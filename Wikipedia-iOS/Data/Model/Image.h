//
//  Image.h
//  Wikipedia-iOS
//
//  Created by Monte Hurd on 1/6/14.
//  Copyright (c) 2014 Wikimedia Foundation. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Article, GalleryImage, Section, SectionImage;

@interface Image : NSManagedObject

@property (nonatomic, retain) NSString * alt;
@property (nonatomic, retain) NSData * data;
@property (nonatomic, retain) NSDate * dateLastAccessed;
@property (nonatomic, retain) NSDate * dateRetrieved;
@property (nonatomic, retain) NSString * extension;
@property (nonatomic, retain) NSString * fileName;
@property (nonatomic, retain) NSNumber * height;
@property (nonatomic, retain) NSString * imageDescription;
@property (nonatomic, retain) NSString * mimeType;
@property (nonatomic, retain) NSString * sourceUrl;
@property (nonatomic, retain) NSNumber * width;
@property (nonatomic, retain) NSString * fileNameNoSizePrefix;
@property (nonatomic, retain) NSNumber * dataSize;
@property (nonatomic, retain) NSSet *article;
@property (nonatomic, retain) NSSet *galleryImage;
@property (nonatomic, retain) NSSet *section;
@property (nonatomic, retain) NSSet *sectionImage;
@end

@interface Image (CoreDataGeneratedAccessors)

- (void)addArticleObject:(Article *)value;
- (void)removeArticleObject:(Article *)value;
- (void)addArticle:(NSSet *)values;
- (void)removeArticle:(NSSet *)values;

- (void)addGalleryImageObject:(GalleryImage *)value;
- (void)removeGalleryImageObject:(GalleryImage *)value;
- (void)addGalleryImage:(NSSet *)values;
- (void)removeGalleryImage:(NSSet *)values;

- (void)addSectionObject:(Section *)value;
- (void)removeSectionObject:(Section *)value;
- (void)addSection:(NSSet *)values;
- (void)removeSection:(NSSet *)values;

- (void)addSectionImageObject:(SectionImage *)value;
- (void)removeSectionImageObject:(SectionImage *)value;
- (void)addSectionImage:(NSSet *)values;
- (void)removeSectionImage:(NSSet *)values;

@end
