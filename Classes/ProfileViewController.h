/* ProfileViewController.h - Display a Last.fm profile
 * 
 * Copyright 2009 Last.fm Ltd.
 *   - Primarily authored by Sam Steele <sam@last.fm>
 *
 * This file is part of MobileLastFM.
 *
 * MobileLastFM is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MobileLastFM is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MobileLastFM.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import "LastFMService.h"
#import "Search.h"

@interface ProfileViewController : UITableViewController<UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate> {
	NSString *_username;
	NSArray *_data;
	NSArray *_recentTracks;
	NSArray *_weeklyArtists;
	GlobalSearchDataSource *_searchData;
	NSMutableDictionary *_weeklyArtistImages;
}
- (id)initWithUsername:(NSString *)username;
@end
