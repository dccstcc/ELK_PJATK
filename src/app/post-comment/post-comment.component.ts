import { Component } from "@angular/core";
import { PostComment } from "./post-comment";

@Component({
 selector:'post-comment',
 templateUrl:'./post-comment.component.html'
})
export class PostCommentComponent{

post = new PostComment(
 "New Post",
 new Date(),
 "some content",
 ["comment 1", "comment 2"]
 );


}