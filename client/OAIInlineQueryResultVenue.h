/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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
 * OAIInlineQueryResultVenue.h
 *
 * Represents a venue. By default, the venue will be sent by the user. Alternatively, you can use *input\\_message\\_content* to send a message with the specified content instead of the venue.
 */

#ifndef OAIInlineQueryResultVenue_H
#define OAIInlineQueryResultVenue_H

#include <QJsonObject>

#include "OAIInlineKeyboardMarkup.h"
#include "OAIInputMessageContent.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIInlineKeyboardMarkup;
class OAIInputMessageContent;

class OAIInlineQueryResultVenue : public OAIObject {
public:
    OAIInlineQueryResultVenue();
    OAIInlineQueryResultVenue(QString json);
    ~OAIInlineQueryResultVenue() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

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

    OAIInlineKeyboardMarkup getReplyMarkup() const;
    void setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup);
    bool is_reply_markup_Set() const;
    bool is_reply_markup_Valid() const;

    OAIInputMessageContent getInputMessageContent() const;
    void setInputMessageContent(const OAIInputMessageContent &input_message_content);
    bool is_input_message_content_Set() const;
    bool is_input_message_content_Valid() const;

    QString getThumbnailUrl() const;
    void setThumbnailUrl(const QString &thumbnail_url);
    bool is_thumbnail_url_Set() const;
    bool is_thumbnail_url_Valid() const;

    qint32 getThumbnailWidth() const;
    void setThumbnailWidth(const qint32 &thumbnail_width);
    bool is_thumbnail_width_Set() const;
    bool is_thumbnail_width_Valid() const;

    qint32 getThumbnailHeight() const;
    void setThumbnailHeight(const qint32 &thumbnail_height);
    bool is_thumbnail_height_Set() const;
    bool is_thumbnail_height_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

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

    OAIInlineKeyboardMarkup m_reply_markup;
    bool m_reply_markup_isSet;
    bool m_reply_markup_isValid;

    OAIInputMessageContent m_input_message_content;
    bool m_input_message_content_isSet;
    bool m_input_message_content_isValid;

    QString m_thumbnail_url;
    bool m_thumbnail_url_isSet;
    bool m_thumbnail_url_isValid;

    qint32 m_thumbnail_width;
    bool m_thumbnail_width_isSet;
    bool m_thumbnail_width_isValid;

    qint32 m_thumbnail_height;
    bool m_thumbnail_height_isSet;
    bool m_thumbnail_height_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInlineQueryResultVenue)

#endif // OAIInlineQueryResultVenue_H
