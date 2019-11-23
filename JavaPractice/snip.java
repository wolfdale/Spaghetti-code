@SuppressWarnings({"unchecked", "rawtypes"})
private String getIdProperty(Class<?> entityClass) {
	String idProperty = null;
	Metamodel metamodel = this.emf.getMetamodel();
	EntityType entity = metamodel.entity( entityClass );
	Set<SingularAttribute> singularAttributes = entity.getSingularAttributes();
	for ( SingularAttribute singularAttribute : singularAttributes ) {
		if ( singularAttribute.isId() ) {
			idProperty = singularAttribute.getName();
			break;
		}
	}
	if ( idProperty == null ) {
		throw new SearchException( "id field not found for: " + entityClass );
	}
	return idProperty;
}
