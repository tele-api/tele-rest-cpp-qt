/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIInputMessageContent.h
 *
 * This object represents the content of a message to be sent as a result of an inline query. Telegram clients currently support the following 5 types:  * [InputTextMessageContent](https://core.telegram.org/bots/api/#inputtextmessagecontent) * [InputLocationMessageContent](https://core.telegram.org/bots/api/#inputlocationmessagecontent) * [InputVenueMessageContent](https://core.telegram.org/bots/api/#inputvenuemessagecontent) * [InputContactMessageContent](https://core.telegram.org/bots/api/#inputcontactmessagecontent) * [InputInvoiceMessageContent](https://core.telegram.org/bots/api/#inputinvoicemessagecontent)
 */

#ifndef OAIInputMessageContent_H
#define OAIInputMessageContent_H

#include <QJsonObject>

#include "OAIInputContactMessageContent.h"
#include "OAIInputInvoiceMessageContent.h"
#include "OAIInputLocationMessageContent.h"
#include "OAIInputTextMessageContent.h"
#include "OAIInputVenueMessageContent.h"
#include "OAILabeledPrice.h"
#include "OAILinkPreviewOptions.h"
#include "OAIMessageEntity.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAILabeledPrice;
class OAIMessageEntity;
class OAILinkPreviewOptions;

class OAIInputMessageContent : public OAIObject {
public:
    OAIInputMessageContent();
    OAIInputMessageContent(QString json);
    ~OAIInputMessageContent() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getMessageText() const;
    void setMessageText(const QString &message_text);
    bool is_message_text_Set() const;
    bool is_message_text_Valid() const;

    double getLatitude() const;
    void setLatitude(const double &latitude);
    bool is_latitude_Set() const;
    bool is_latitude_Valid() const;

    double getLongitude() const;
    void setLongitude(const double &longitude);
    bool is_longitude_Set() const;
    bool is_longitude_Valid() const;

    QString getTitle() const;
    void setTitle(const QString &title);
    bool is_title_Set() const;
    bool is_title_Valid() const;

    QString getAddress() const;
    void setAddress(const QString &address);
    bool is_address_Set() const;
    bool is_address_Valid() const;

    QString getPhoneNumber() const;
    void setPhoneNumber(const QString &phone_number);
    bool is_phone_number_Set() const;
    bool is_phone_number_Valid() const;

    QString getFirstName() const;
    void setFirstName(const QString &first_name);
    bool is_first_name_Set() const;
    bool is_first_name_Valid() const;

    QString getDescription() const;
    void setDescription(const QString &description);
    bool is_description_Set() const;
    bool is_description_Valid() const;

    QString getPayload() const;
    void setPayload(const QString &payload);
    bool is_payload_Set() const;
    bool is_payload_Valid() const;

    QString getCurrency() const;
    void setCurrency(const QString &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    QList<OAILabeledPrice> getPrices() const;
    void setPrices(const QList<OAILabeledPrice> &prices);
    bool is_prices_Set() const;
    bool is_prices_Valid() const;

    QString getParseMode() const;
    void setParseMode(const QString &parse_mode);
    bool is_parse_mode_Set() const;
    bool is_parse_mode_Valid() const;

    QList<OAIMessageEntity> getEntities() const;
    void setEntities(const QList<OAIMessageEntity> &entities);
    bool is_entities_Set() const;
    bool is_entities_Valid() const;

    OAILinkPreviewOptions getLinkPreviewOptions() const;
    void setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options);
    bool is_link_preview_options_Set() const;
    bool is_link_preview_options_Valid() const;

    double getHorizontalAccuracy() const;
    void setHorizontalAccuracy(const double &horizontal_accuracy);
    bool is_horizontal_accuracy_Set() const;
    bool is_horizontal_accuracy_Valid() const;

    qint32 getLivePeriod() const;
    void setLivePeriod(const qint32 &live_period);
    bool is_live_period_Set() const;
    bool is_live_period_Valid() const;

    qint32 getHeading() const;
    void setHeading(const qint32 &heading);
    bool is_heading_Set() const;
    bool is_heading_Valid() const;

    qint32 getProximityAlertRadius() const;
    void setProximityAlertRadius(const qint32 &proximity_alert_radius);
    bool is_proximity_alert_radius_Set() const;
    bool is_proximity_alert_radius_Valid() const;

    QString getFoursquareId() const;
    void setFoursquareId(const QString &foursquare_id);
    bool is_foursquare_id_Set() const;
    bool is_foursquare_id_Valid() const;

    QString getFoursquareType() const;
    void setFoursquareType(const QString &foursquare_type);
    bool is_foursquare_type_Set() const;
    bool is_foursquare_type_Valid() const;

    QString getGooglePlaceId() const;
    void setGooglePlaceId(const QString &google_place_id);
    bool is_google_place_id_Set() const;
    bool is_google_place_id_Valid() const;

    QString getGooglePlaceType() const;
    void setGooglePlaceType(const QString &google_place_type);
    bool is_google_place_type_Set() const;
    bool is_google_place_type_Valid() const;

    QString getLastName() const;
    void setLastName(const QString &last_name);
    bool is_last_name_Set() const;
    bool is_last_name_Valid() const;

    QString getVcard() const;
    void setVcard(const QString &vcard);
    bool is_vcard_Set() const;
    bool is_vcard_Valid() const;

    QString getProviderToken() const;
    void setProviderToken(const QString &provider_token);
    bool is_provider_token_Set() const;
    bool is_provider_token_Valid() const;

    qint32 getMaxTipAmount() const;
    void setMaxTipAmount(const qint32 &max_tip_amount);
    bool is_max_tip_amount_Set() const;
    bool is_max_tip_amount_Valid() const;

    QList<qint32> getSuggestedTipAmounts() const;
    void setSuggestedTipAmounts(const QList<qint32> &suggested_tip_amounts);
    bool is_suggested_tip_amounts_Set() const;
    bool is_suggested_tip_amounts_Valid() const;

    QString getProviderData() const;
    void setProviderData(const QString &provider_data);
    bool is_provider_data_Set() const;
    bool is_provider_data_Valid() const;

    QString getPhotoUrl() const;
    void setPhotoUrl(const QString &photo_url);
    bool is_photo_url_Set() const;
    bool is_photo_url_Valid() const;

    qint32 getPhotoSize() const;
    void setPhotoSize(const qint32 &photo_size);
    bool is_photo_size_Set() const;
    bool is_photo_size_Valid() const;

    qint32 getPhotoWidth() const;
    void setPhotoWidth(const qint32 &photo_width);
    bool is_photo_width_Set() const;
    bool is_photo_width_Valid() const;

    qint32 getPhotoHeight() const;
    void setPhotoHeight(const qint32 &photo_height);
    bool is_photo_height_Set() const;
    bool is_photo_height_Valid() const;

    bool isNeedName() const;
    void setNeedName(const bool &need_name);
    bool is_need_name_Set() const;
    bool is_need_name_Valid() const;

    bool isNeedPhoneNumber() const;
    void setNeedPhoneNumber(const bool &need_phone_number);
    bool is_need_phone_number_Set() const;
    bool is_need_phone_number_Valid() const;

    bool isNeedEmail() const;
    void setNeedEmail(const bool &need_email);
    bool is_need_email_Set() const;
    bool is_need_email_Valid() const;

    bool isNeedShippingAddress() const;
    void setNeedShippingAddress(const bool &need_shipping_address);
    bool is_need_shipping_address_Set() const;
    bool is_need_shipping_address_Valid() const;

    bool isSendPhoneNumberToProvider() const;
    void setSendPhoneNumberToProvider(const bool &send_phone_number_to_provider);
    bool is_send_phone_number_to_provider_Set() const;
    bool is_send_phone_number_to_provider_Valid() const;

    bool isSendEmailToProvider() const;
    void setSendEmailToProvider(const bool &send_email_to_provider);
    bool is_send_email_to_provider_Set() const;
    bool is_send_email_to_provider_Valid() const;

    bool isIsFlexible() const;
    void setIsFlexible(const bool &is_flexible);
    bool is_is_flexible_Set() const;
    bool is_is_flexible_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_message_text;
    bool m_message_text_isSet;
    bool m_message_text_isValid;

    double m_latitude;
    bool m_latitude_isSet;
    bool m_latitude_isValid;

    double m_longitude;
    bool m_longitude_isSet;
    bool m_longitude_isValid;

    QString m_title;
    bool m_title_isSet;
    bool m_title_isValid;

    QString m_address;
    bool m_address_isSet;
    bool m_address_isValid;

    QString m_phone_number;
    bool m_phone_number_isSet;
    bool m_phone_number_isValid;

    QString m_first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;

    QString m_description;
    bool m_description_isSet;
    bool m_description_isValid;

    QString m_payload;
    bool m_payload_isSet;
    bool m_payload_isValid;

    QString m_currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    QList<OAILabeledPrice> m_prices;
    bool m_prices_isSet;
    bool m_prices_isValid;

    QString m_parse_mode;
    bool m_parse_mode_isSet;
    bool m_parse_mode_isValid;

    QList<OAIMessageEntity> m_entities;
    bool m_entities_isSet;
    bool m_entities_isValid;

    OAILinkPreviewOptions m_link_preview_options;
    bool m_link_preview_options_isSet;
    bool m_link_preview_options_isValid;

    double m_horizontal_accuracy;
    bool m_horizontal_accuracy_isSet;
    bool m_horizontal_accuracy_isValid;

    qint32 m_live_period;
    bool m_live_period_isSet;
    bool m_live_period_isValid;

    qint32 m_heading;
    bool m_heading_isSet;
    bool m_heading_isValid;

    qint32 m_proximity_alert_radius;
    bool m_proximity_alert_radius_isSet;
    bool m_proximity_alert_radius_isValid;

    QString m_foursquare_id;
    bool m_foursquare_id_isSet;
    bool m_foursquare_id_isValid;

    QString m_foursquare_type;
    bool m_foursquare_type_isSet;
    bool m_foursquare_type_isValid;

    QString m_google_place_id;
    bool m_google_place_id_isSet;
    bool m_google_place_id_isValid;

    QString m_google_place_type;
    bool m_google_place_type_isSet;
    bool m_google_place_type_isValid;

    QString m_last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;

    QString m_vcard;
    bool m_vcard_isSet;
    bool m_vcard_isValid;

    QString m_provider_token;
    bool m_provider_token_isSet;
    bool m_provider_token_isValid;

    qint32 m_max_tip_amount;
    bool m_max_tip_amount_isSet;
    bool m_max_tip_amount_isValid;

    QList<qint32> m_suggested_tip_amounts;
    bool m_suggested_tip_amounts_isSet;
    bool m_suggested_tip_amounts_isValid;

    QString m_provider_data;
    bool m_provider_data_isSet;
    bool m_provider_data_isValid;

    QString m_photo_url;
    bool m_photo_url_isSet;
    bool m_photo_url_isValid;

    qint32 m_photo_size;
    bool m_photo_size_isSet;
    bool m_photo_size_isValid;

    qint32 m_photo_width;
    bool m_photo_width_isSet;
    bool m_photo_width_isValid;

    qint32 m_photo_height;
    bool m_photo_height_isSet;
    bool m_photo_height_isValid;

    bool m_need_name;
    bool m_need_name_isSet;
    bool m_need_name_isValid;

    bool m_need_phone_number;
    bool m_need_phone_number_isSet;
    bool m_need_phone_number_isValid;

    bool m_need_email;
    bool m_need_email_isSet;
    bool m_need_email_isValid;

    bool m_need_shipping_address;
    bool m_need_shipping_address_isSet;
    bool m_need_shipping_address_isValid;

    bool m_send_phone_number_to_provider;
    bool m_send_phone_number_to_provider_isSet;
    bool m_send_phone_number_to_provider_isValid;

    bool m_send_email_to_provider;
    bool m_send_email_to_provider_isSet;
    bool m_send_email_to_provider_isValid;

    bool m_is_flexible;
    bool m_is_flexible_isSet;
    bool m_is_flexible_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInputMessageContent)

#endif // OAIInputMessageContent_H
