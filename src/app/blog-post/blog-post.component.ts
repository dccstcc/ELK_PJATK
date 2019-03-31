import { Component } from "@angular/core";
import { BlogPost } from "./blog-post";

@Component({
 selector:'blog-post',
 templateUrl:'./blog-post.component.html'
})
export class BlogPostComponent{

post = new BlogPost(
 "New Post",
 new Date(),
 "some content",
 ["comment 1", "comment 2"]
 );


}