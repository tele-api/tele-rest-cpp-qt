/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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
 * OAIInputPaidMedia.h
 *
 * This object describes the paid media to be sent. Currently, it can be one of  * [InputPaidMediaPhoto](https://core.telegram.org/bots/api/#inputpaidmediaphoto) * [InputPaidMediaVideo](https://core.telegram.org/bots/api/#inputpaidmediavideo)
 */

#ifndef OAIInputPaidMedia_H
#define OAIInputPaidMedia_H

#include <QJsonObject>

#include "OAIInputPaidMediaPhoto.h"
#include "OAIInputPaidMediaVideo.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIInputPaidMedia : public OAIObject {
public:
    OAIInputPaidMedia();
    OAIInputPaidMedia(QString json);
    ~OAIInputPaidMedia() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getMedia() const;
    void setMedia(const QString &media);
    bool is_media_Set() const;
    bool is_media_Valid() const;

    QString getThumbnail() const;
    void setThumbnail(const QString &thumbnail);
    bool is_thumbnail_Set() const;
    bool is_thumbnail_Valid() const;

    QString getCover() const;
    void setCover(const QString &cover);
    bool is_cover_Set() const;
    bool is_cover_Valid() const;

    qint32 getStartTimestamp() const;
    void setStartTimestamp(const qint32 &start_timestamp);
    bool is_start_timestamp_Set() const;
    bool is_start_timestamp_Valid() const;

    qint32 getWidth() const;
    void setWidth(const qint32 &width);
    bool is_width_Set() const;
    bool is_width_Valid() const;

    qint32 getHeight() const;
    void setHeight(const qint32 &height);
    bool is_height_Set() const;
    bool is_height_Valid() const;

    qint32 getDuration() const;
    void setDuration(const qint32 &duration);
    bool is_duration_Set() const;
    bool is_duration_Valid() const;

    bool isSupportsStreaming() const;
    void setSupportsStreaming(const bool &supports_streaming);
    bool is_supports_streaming_Set() const;
    bool is_supports_streaming_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_media;
    bool m_media_isSet;
    bool m_media_isValid;

    QString m_thumbnail;
    bool m_thumbnail_isSet;
    bool m_thumbnail_isValid;

    QString m_cover;
    bool m_cover_isSet;
    bool m_cover_isValid;

    qint32 m_start_timestamp;
    bool m_start_timestamp_isSet;
    bool m_start_timestamp_isValid;

    qint32 m_width;
    bool m_width_isSet;
    bool m_width_isValid;

    qint32 m_height;
    bool m_height_isSet;
    bool m_height_isValid;

    qint32 m_duration;
    bool m_duration_isSet;
    bool m_duration_isValid;

    bool m_supports_streaming;
    bool m_supports_streaming_isSet;
    bool m_supports_streaming_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInputPaidMedia)

#endif // OAIInputPaidMedia_H
