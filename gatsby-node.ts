exports.onCreateNode = async ({ node, loadNodeContent, actions }) => {
  if (node.internal.mediaType !== 'text/markdown') return;

  // Ensure Gatsby loads the item into memory so that its
  // content becomes available in the GraphQL File node
  try {
    const nodeContent: string = await loadNodeContent(node);
    const { createNodeField } = actions;

    createNodeField({
      node,
      name: 'content',
      value: nodeContent.trim(),
    });
  } catch (error) {
    console.error(error);
  }
};
